#pragma once
#include <iostream>

// class Msg;

namespace Transaction{
     class UndoAction{
      public:
        virtual void Init(){}
        virtual void Ok(){}
        virtual void Fail(){}
        virtual ~UndoAction(){}
     };

     class KeepInt:public UndoAction{
      public:
         KeepInt(int & val):value(val){
            prevValue=value;
            
         }
         int & value;
         int prevValue;

     };

     class AccountState{
      public:
         AccountState(UndoAction * mesage):msg(mesage){
               msg->Init();  
               okFlag=false;
            }

         AccountState(KeepInt * keepVal):msg(keepVal){}


         static void AllOk(){
            okFlag=true;
         }

         ~AccountState(){
            if(okFlag==true){
               msg->Ok();

            }
            else{
               msg->Fail();
               auto ptr =dynamic_cast<KeepInt*>(msg);
               if(ptr){
                  ptr->value=ptr->prevValue;
               }

            }
               delete msg;
            }

      private:
         UndoAction *msg;
         static bool okFlag;
     };
     bool AccountState::okFlag=false;
}
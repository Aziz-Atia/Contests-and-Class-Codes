.MODEL SMALL 
.STACK 100H


.DATA
W DW 10,20,30,40,50,60,70,80,90,100


.CODE
MOV AX,@DATA
MOV DS,AX

OR AX,AX
LEA SI,W
MOV CX,10
ADD:
   ADD AX,[SI]
   MOV [SI],2
   LOOP ADD
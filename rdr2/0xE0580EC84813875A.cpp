// braithwaites3.ysc @ L52255
void func_1274()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 38)
  {
    if (func_394(Local_172[iVar0 /*10*/].f_1, 16) && ENTITY::DOES_ENTITY_EXIST(Local_172[iVar0 /*10*/]))
    {
      ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_172[iVar0 /*10*/], true, false);
      ENTITY::FREEZE_ENTITY_POSITION(Local_172[iVar0 /*10*/], false);
      ENTITY::SET_ENTITY_VISIBLE(Local_172[iVar0 /*10*/], true);
      PED::SET_PED_CAN_BE_TARGETTED(Local_172[iVar0 /*10*/], true);
      func_470(&(Local_172[iVar0 /*10*/].f_1), 16);
    }
    iVar0++;
  }
}
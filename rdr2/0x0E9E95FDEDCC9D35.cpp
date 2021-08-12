// braithwaites3.ysc @ L59315
void func_1458()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 7)
  {
    if ((!ENTITY::IS_ENTITY_DEAD(Local_101[iVar0 /*10*/]) && iVar0 != 0) && !PED::IS_PED_GROUP_MEMBER(Local_101[iVar0 /*10*/], iLocal_703, 0))
    {
      func_1880(&(Local_101[iVar0 /*10*/]), &iLocal_703, 0, 1, 1, 1, 0);
    }
    iVar0++;
  }
  PED::_0x0E9E95FDEDCC9D35(Local_101[1 /*10*/], 0, 0);
  PED::_0x0E9E95FDEDCC9D35(Local_101[2 /*10*/], 1, 0);
  PED::_0x0E9E95FDEDCC9D35(Local_101[3 /*10*/], 2, 0);
  PED::_0x0E9E95FDEDCC9D35(Local_101[4 /*10*/], 3, 0);
  PED::_0x0E9E95FDEDCC9D35(Local_101[5 /*10*/], 4, 0);
  PED::_0x0E9E95FDEDCC9D35(Local_101[6 /*10*/], 5, 0);
  PED::_0x0E9E95FDEDCC9D35(Global_35, 6, 0);
}
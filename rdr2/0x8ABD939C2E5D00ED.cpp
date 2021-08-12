// abigail2_1.ysc @ L27188
void func_518(int iParam0)
{
  iParam0 = func_258(iParam0);
  if (iParam0 == -1)
  {
    return;
  }
  if (iParam0 >= 7)
  {
    return;
  }
  if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
  {
    MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
    MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
  }
  Global_1900383[iParam0 /*45*/].f_25 = 0;
}
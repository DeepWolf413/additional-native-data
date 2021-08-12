// flow_controller.ysc @ L118755
int func_795(int iParam0)
{
  int iVar0;
  
  if (iParam0 == -1)
  {
    return -2;
  }
  iVar0 = Global_77517.f_3590[iParam0 /*2*/];
  if (Global_77517.f_3590[iParam0 /*2*/].f_1 == 1)
  {
    PLAYER::SPECIAL_ABILITY_UNLOCK(func_28(iVar0), 0);
    Global_112293.f_2361.f_539.f_2383[iVar0] = 1;
  }
  else
  {
    PLAYER::SPECIAL_ABILITY_LOCK(func_28(iVar0), 0);
    Global_112293.f_2361.f_539.f_2383[iVar0] = 0;
  }
  return -2;
}
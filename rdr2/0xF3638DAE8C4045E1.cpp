// flow_controller.ysc @ L2756
int func_114(int iParam0)
{
  char* sVar0;
  bool bVar1;
  bool bVar2;

  sVar0 = func_267(Global_1879534.f_211[iParam0 /*4*/]);
  if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    return -2;
  }
  if (Global_1879534.f_211[iParam0 /*4*/].f_1 > 0)
  {
    bVar1 = true;
  }
  if (Global_1879534.f_211[iParam0 /*4*/].f_2 > 0)
  {
    bVar2 = true;
  }
  if (bVar2)
  {
    AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(sVar0, bVar1, true);
  }
  else
  {
    AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bVar1, true);
  }
  return -2;
}
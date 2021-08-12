// agency_prep2amb.ysc @ L12163
void func_253(char* sParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (Global_110933 && iParam1)
  {
    if (func_2(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
    {
      HUD::CLEAR_HELP(false);
    }
  }
  iVar0 = 0;
  while (iVar0 < Global_112293.f_20408.f_145)
  {
    if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
    {
      iVar1 = iVar0;
      while (iVar1 <= (Global_112293.f_20408.f_145 - 2))
      {
        func_256(iVar1, iVar1 + 1);
        iVar1++;
      }
      func_255((Global_112293.f_20408.f_145 - 1));
      Global_112293.f_20408.f_145 = (Global_112293.f_20408.f_145 - 1);
      func_254();
      return;
    }
    iVar0++;
  }
}
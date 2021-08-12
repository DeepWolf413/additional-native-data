// long_update.ysc @ L4946
void func_170()
{
  int iVar0;
  int iVar1;

  iVar0 = func_646(Global_36);
  if (iVar0 != -1)
  {
    iVar1 = Global_1888801[iVar0 /*35*/].f_4;
    if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
    {
      PERSISTENCE::_0xEFB5F34CC0953B27(iVar1);
    }
  }
}
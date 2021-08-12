// camp_pronghornranch.ysc @ L19698
void func_660(int iParam0, char* sParam1)
{
  int iVar0;

  if (!func_417(iParam0))
  {
    return;
  }
  iVar0 = func_418(iParam0);
  if (!func_803(iVar0))
  {
    return;
  }
  if (!MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(iVar0), sParam1))
  {
    PERSCHAR::_0x187D65F3AEC5D679(iVar0, sParam1);
  }
}
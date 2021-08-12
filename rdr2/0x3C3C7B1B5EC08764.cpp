// abigail2_1.ysc @ L63656
void func_1715(var uParam0, char* sParam1)
{
  int iVar0;

  if (func_776(uParam0, 8192))
  {
    return;
  }
  if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
  {
    iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
    if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
    {
      MemCopy(&(uParam0->f_800), {func_2093("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
    }
    MISC::_0x3C3C7B1B5EC08764();
  }
  else
  {
    MemCopy(&(uParam0->f_800), {func_2093("cutscene@", sParam1, 1, 63)}, 4);
  }
  func_744(uParam0, 8192);
}
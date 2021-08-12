// fillet_sp.ysc @ L12581
char* func_490(var uParam0, int iParam1)
{
  char* sVar0;

  sVar0 = "ExitChair";
  if (func_496(uParam0->f_592[iParam1 /*202*/]) && TASK::_0xE9A6400D1A0E7A55(uParam0->f_592[iParam1 /*202*/]) == joaat("IDLEWITHKNIFE"))
  {
    sVar0 = "ExitBase";
  }
  TASK::_0x9585FF23C4B8EDE0(uParam0->f_592[iParam1 /*202*/], 2f);
  return sVar0;
}
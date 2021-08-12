// abigail2_1.ysc @ L63802
void func_1726(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  if (func_776(uParam0, 16))
  {
    return;
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !func_1684(uParam0->f_5, 0f, 0f, 0f))
  {
    uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_2097());
    func_744(uParam0, 8);
  }
  if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
  {
    POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
    POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
    func_2098(uParam0, uParam0->f_4, 0, 1);
    PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
    func_744(uParam0, 16);
  }
}
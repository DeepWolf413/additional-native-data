// camp_clemenspoint.ysc @ L23927
void func_785(var uParam0, int iParam1, bool bParam2)
{
  int iVar0;

  if (!func_344(func_179(iParam1), 0))
  {
    return;
  }
  if (!bParam2)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(VOLUME::_0x7FD78DFD0C5D7B9B(*uParam0)))
    {
      bParam2 = true;
    }
  }
  if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
  {
    iVar0 = func_561(iParam1, 0);
    if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
    {
      VOLUME::_0xE2BE6FFA4A13CBB0(*uParam0, iVar0, bParam2);
      VOLUME::_0x4A8FEFC43FD8AC9B(*uParam0, 0, 1);
    }
  }
}
// beat_bandito_breakout.ysc @ L10286
void func_288(var uParam0, bool bParam1)
{
  *uParam0 = { ENTITY::GET_ENTITY_COORDS(iLocal_82[1], true, false) };
  uParam0->f_3 = { -3626.2f, -2605.3f, -12.8f };
  uParam0->f_7 = 0f;
  uParam0->f_9 = iLocal_82[1];
  uParam0->f_10 = iLocal_82[0];
  uParam0->f_12 = 1;
  uParam0->f_13 = 1;
  uParam0->f_14 = 1;
  if (bParam1)
  {
    PED::_0x4C57F27D1554E6B0(iLocal_82[1], uParam0->f_3, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
  }
}
// coachrobberies_gang3.ysc @ L10384
void func_227()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
  {
    return;
  }
  if (!bLocal_231)
  {
    if (func_540())
    {
      func_532();
      func_224(&uLocal_137);
      VEHICLE::_0x4C60C333F9CCA2B6(Global_1392388.f_5, 0);
      func_541(Global_1392388.f_5);
      func_257(536870912);
      bLocal_231 = true;
    }
  }
}
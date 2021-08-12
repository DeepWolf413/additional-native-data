// braithwaites2.ysc @ L37329
bool func_802(var uParam0)
{
  PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
  PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
  if (!func_8(uParam0, 8))
  {
    if (func_1258(uParam0, "BRT2_IG7", 1))
    {
      func_1391(uParam0);
      AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
      AUDIO::_0x380A2E353AD30917(bLocal_785, 10f, 7f);
      func_135(uParam0, 20);
    }
    func_1261(&uLocal_7488);
  }
  else
  {
    func_135(uParam0, 1);
  }
  return uParam0->f_607 == uParam0->f_607;
}
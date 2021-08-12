// camp_beaverhollow.ysc @ L2872
void func_78()
{
  if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
  {
    if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
    {
      func_310("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
      func_435(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "RANCH_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
    }
    else
    {
      func_310("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
      func_435(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "RANCH_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
    }
  }
  else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
  {
    func_310("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
    func_435(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
  }
  else
  {
    func_310("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
    func_435(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
  }
  func_436();
}
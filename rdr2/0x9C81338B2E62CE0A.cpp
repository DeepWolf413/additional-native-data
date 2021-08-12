// beat_dark_alley_stabber.ysc @ L1959
bool func_40()
{
  if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), uLocal_798[0], 1000))
  {
    return true;
  }
  if (WEAPON::_0x9E2D5D6BC97A5F1E(uLocal_798[0], func_164(Global_35, 0, 0), 1500) || WEAPON::_0x9E2D5D6BC97A5F1E(uLocal_798[0], func_164(Global_35, 1, 0), 1500))
  {
    return true;
  }
  return false;
}
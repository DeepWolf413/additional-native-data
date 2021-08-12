// family1.ysc @ L27979
void func_437()
{
  VEHICLE::_SET_BOAT_BOOM_POSITION_RATIO(iLocal_3031, fLocal_3019);
  if (fLocal_3019 < 0.85f)
  {
    fLocal_3019 = (fLocal_3019 + (0.1f * SYSTEM::TIMESTEP()));
  }
  else
  {
    fLocal_3019 = 0.85f;
  }
}
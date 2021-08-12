// appinternet.ysc @ L281218
int func_2656(struct<2> Param0, float fParam2)
{
  if (Global_77248 && !NETWORK::NETWORK_CAN_SET_WAYPOINT())
  {
    return 0;
  }
  if (fLocal_265 != Param0 && fLocal_266 != Param0.f_1)
  {
    HUD::SET_NEW_WAYPOINT(Param0, Param0.f_1);
    fLocal_265 = Param0;
    fLocal_266 = Param0.f_1;
    return 1;
  }
  return 1;
}
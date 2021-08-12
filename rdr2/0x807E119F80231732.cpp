// fishing_core.ysc @ L2895
void func_43(var uParam0, var uParam1, int iParam2)
{
  if (iParam2 == 1)
  {
    if (!func_50(uParam0, 64))
    {
      if (func_1())
      {
        NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(*uParam1 + 1);
      }
      PED::_0xED9582B3DA8F02B4((*uParam1 + uParam0->f_73) + 1);
      func_51(uParam0, 64);
    }
  }
  else if (func_50(uParam0, 64))
  {
    PED::_0x7D4E70A67A651C71((*uParam1 + uParam0->f_73) + 1);
    func_204(uParam0, 64);
  }
}
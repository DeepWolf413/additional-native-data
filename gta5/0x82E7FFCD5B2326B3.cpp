// am_hs4_nimb_lsa_isd_leave.ysc @ L46560
void func_279()
{
  NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
  func_287(&uLocal_87, joaat("nimbus"), "Plane_1");
  func_54(&uLocal_87, 1);
  func_285(&uLocal_87, -1640.596f, -3127.113f, 14.5828f, -2.3352f, 0.0001f, 145.7214f, "HS4_NIMB_LSA_ISD", 0, 1, 1023, Global_1695725);
  Global_1695725 = 0;
  GRAPHICS::SET_TIMECYCLE_MODIFIER("H4_Hanger_for_CU");
  GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
  if (func_58(PLAYER::PLAYER_PED_ID()))
  {
    func_280();
    if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == 19)
    {
      PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
    }
  }
}
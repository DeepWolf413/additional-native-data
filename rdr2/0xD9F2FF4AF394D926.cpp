// finale1.ysc @ L44872
void func_1020(var uParam0)
{
  if (!func_493(uLocal_425, 256))
  {
    func_484(-1818850842);
    func_1721("fin1_nav_vanhorn");
    func_485(1192526031);
    ENTITY::CREATE_MODEL_HIDE(2341.526f, 1359.888f, 105.225f, 0.5f, joaat("P_CRATESTACK03X"), true);
    ENTITY::CREATE_MODEL_HIDE(2349.845f, 1363.536f, 104.952f, 0.5f, joaat("P_TREESTUMP02X"), true);
    if (func_33(uParam0) == iLocal_442)
    {
      CAM::_0x1B3C2D961F5FC0E1("script@Story@FIN1@ride_to_beavers");
      STREAMING::PREFETCH_SRL("script@cme@FIN1_CME_SHOT1_srl");
      STREAMING::_0xD9F2FF4AF394D926();
      STREAMING::_0xAE00387E53B1E9FC();
    }
    func_498(&uLocal_425, 256);
  }
}
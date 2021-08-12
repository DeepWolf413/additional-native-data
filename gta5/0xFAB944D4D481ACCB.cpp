// freemode.ysc @ L960612
void func_14896(int iParam0)
{
  if (func_14978(iParam0))
  {
    PED::_0xFAB944D4D481ACCB(PLAYER::PLAYER_PED_ID(), true);
  }
  else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1702514) && !ENTITY::IS_ENTITY_IN_AIR(Global_1702514))
  {
    func_7005(Global_1702514, 1093140480, SYSTEM::CEIL((2000f / 1000f)), 1056964608, 0, 1, 0);
  }
  if (!CAM::IS_SCREEN_FADING_OUT())
  {
    CAM::DO_SCREEN_FADE_OUT(2000);
  }
}
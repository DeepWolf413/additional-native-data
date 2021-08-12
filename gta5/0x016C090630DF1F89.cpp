// am_mp_creator_trailer.ysc @ L303618
void func_4885()
{
  if (CAM::IS_GAMEPLAY_CAM_SHAKING())
  {
    CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
  }
  func_4892();
  func_4891();
  func_4890();
  func_4889(&(Local_1930.f_17));
  func_4854(&uLocal_2138, 0);
  func_4888(&uLocal_2129);
  if (func_7(PLAYER::PLAYER_ID(), 1, 1) && MISC::IS_BIT_SET(Local_1930.f_3, 8))
  {
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
  }
  func_4887();
  func_4886();
}
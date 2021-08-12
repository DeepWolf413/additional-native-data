// agency_heist1.ysc @ L111104
void func_696()
{
  if (CAM::DOES_CAM_EXIST(iLocal_1004))
  {
    CAM::SET_CAM_ACTIVE(iLocal_1004, false);
    CAM::DESTROY_CAM(iLocal_1004, false);
  }
  if (CAM::DOES_CAM_EXIST(Local_960))
  {
    CAM::SET_CAM_ACTIVE(Local_960, false);
    CAM::DESTROY_CAM(Local_960, false);
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
  }
  if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
  }
  CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}
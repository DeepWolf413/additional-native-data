// act_camp_dominoes_light.ysc @ L63
void func_1()
{
  func_3(1);
  if (func_4(iLocal_14))
  {
    func_5(&iLocal_14, 1, 1);
  }
  if (MAP::DOES_BLIP_EXIST(iLocal_30))
  {
    MAP::REMOVE_BLIP(&iLocal_30);
  }
  if (CAM::DOES_CAM_EXIST(iLocal_38))
  {
    CAM::DESTROY_CAM(iLocal_38, false);
  }
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_44))
  {
    ANIMSCENE::RESET_ANIM_SCENE(iLocal_44, 0);
    ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_44, "PLAYER", Global_35);
    ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_44);
  }
  if (bLocal_33)
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
    func_6();
  }
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
  {
    func_7(iLocal_31);
    PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_32, false);
    VOLUME::_DELETE_VOLUME(iLocal_31);
  }
}
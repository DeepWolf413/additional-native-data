// shop_net_barber.ysc @ L12781
void func_400(var uParam0)
{
  *uParam0 = *uParam0;
  if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
  {
    TASK::CLEAR_PED_TASKS(Global_35, true, false);
  }
  if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() || NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
  {
    NETWORK::NETWORK_END_TUTORIAL_SESSION();
  }
  func_209(Global_35, -1801499084, 0);
  if (CAM::DOES_CAM_EXIST(uParam0->f_1985))
  {
    CAM::SET_CAM_ACTIVE(uParam0->f_1985, false);
  }
  CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
  if (CAM::DOES_CAM_EXIST(uParam0->f_1985))
  {
    CAM::DESTROY_CAM(uParam0->f_1985, false);
  }
  STREAMING::REMOVE_ANIM_DICT(func_742());
  WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
}
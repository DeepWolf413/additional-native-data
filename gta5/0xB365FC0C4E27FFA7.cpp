// am_mp_yacht.ysc @ L115555
void func_834(var uParam0)
{
  int iVar0;
  
  if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && func_215()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
  {
    func_247(PLAYER::PLAYER_ID(), 0, 0, 0);
  }
  NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, false);
  uParam0->f_1 = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_37, uParam0->f_40, 2);
  iVar0 = 0;
  while (iVar0 < 4)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0]) && !PED::IS_PED_INJURED(uParam0->f_3[iVar0]))
    {
      INTERIOR::CLEAR_ROOM_FOR_ENTITY(uParam0->f_3[iVar0]);
      ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3[iVar0], false);
      ENTITY::SET_ENTITY_ROTATION(uParam0->f_3[iVar0], PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_19, uParam0->f_20[iVar0], uParam0->f_37, uParam0->f_40, 0f, 2), 2, true);
      ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_3[iVar0], PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_19, uParam0->f_20[iVar0], uParam0->f_37, uParam0->f_40, 0f, 2), false, false, true);
      TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_3[iVar0], uParam0->f_1, uParam0->f_19, uParam0->f_20[iVar0], 1000f, -1000f, 4, 0, 1000f, 0);
      ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0], true, false);
    }
    iVar0++;
  }
  uParam0->f_13 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uParam0->f_27[0 /*3*/], uParam0->f_31[0 /*3*/], uParam0->f_35[0], false, 2);
  CAM::SET_CAM_FAR_CLIP(uParam0->f_13, 1000f);
  CAM::SHAKE_CAM(uParam0->f_13, "HAND_SHAKE", 0.25f);
  CAM::SET_CAM_ACTIVE(uParam0->f_13, true);
  CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
  ENTITY::PLAY_ENTITY_ANIM(iLocal_1785[0], uParam0->f_20[4], uParam0->f_19, 1000f, false, false, false, 0f, 524288);
  func_1056(&(uParam0->f_14), 1, 0);
}
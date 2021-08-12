// am_mp_arena_garage.ysc @ L381860
void func_6278(bool bParam0)
{
  if (Local_320.f_465 != -1)
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_320.f_465))
    {
      if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_320.f_465) < 1f)
      {
        PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_320.f_465, 1f);
      }
    }
    Local_320.f_465 = -1;
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_320.f_466))
  {
    PED::DELETE_PED(&(Local_320.f_466));
  }
  if (CAM::DOES_CAM_EXIST(Local_320.f_463))
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    CAM::DESTROY_CAM(Local_320.f_463, false);
  }
  if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && MISC::IS_BIT_SET(Global_1683970.f_3, 5))
  {
    func_1600(0, 0, 0, 1);
  }
  MISC::CLEAR_BIT(&Local_320, 8);
  if (bParam0)
  {
    MISC::CLEAR_BIT(&(Global_1683970.f_3), 5);
  }
}
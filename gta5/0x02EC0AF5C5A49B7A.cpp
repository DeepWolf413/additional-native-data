// am_mp_drone.ysc @ L2494
void func_99()
{
  if (func_174())
  {
    return;
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_185.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_185.f_158), false))
  {
    if (CAM::DOES_CAM_EXIST(Local_185.f_168) && CAM::IS_CAM_RENDERING(Local_185.f_168))
    {
      if (!func_83())
      {
        func_165();
        func_131();
      }
      else
      {
        func_112();
        func_102();
      }
      RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
      func_101(1);
      func_100(2);
    }
  }
}
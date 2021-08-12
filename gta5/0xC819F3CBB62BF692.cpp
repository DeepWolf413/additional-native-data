// am_mp_property_int.ysc @ L231245
void func_2393()
{
  bool bVar0;
  
  if (CAM::DOES_CAM_EXIST(iLocal_12768))
  {
    if (CAM::IS_CAM_RENDERING(iLocal_12768))
    {
      bVar0 = true;
    }
    if (CAM::IS_CAM_ACTIVE(iLocal_12768))
    {
      CAM::SET_CAM_ACTIVE(iLocal_12768, false);
    }
    CAM::DESTROY_CAM(iLocal_12768, false);
    if (bVar0)
    {
      CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(true, 0f, 3, 0);
    }
  }
}
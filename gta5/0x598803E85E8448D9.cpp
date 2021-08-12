// taxiservice.ysc @ L9993
int func_178()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
  {
    return 1;
  }
  if (ENTITY::DOES_ENTITY_EXIST(Global_111324))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_111324, false))
    {
      iLocal_111 = OBJECT::CREATE_OBJECT(iLocal_110, ENTITY::GET_ENTITY_COORDS(Global_111324, true), true, true, false);
      ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_111, Global_111324, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_111324, "Chassis"), Local_986, Local_989, false, false, false, false, 2, true);
      VEHICLE::SET_TAXI_LIGHTS(Global_111324, false);
      if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
      {
        HUD::REGISTER_NAMED_RENDERTARGET("taxi", false);
        HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_111));
      }
      iLocal_95 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi");
    }
  }
  return 0;
}
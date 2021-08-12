// exile1.ysc @ L8195
void func_116(bool bParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_525[2], false))
  {
    if (bParam0)
    {
      VEHICLE::_SET_VEHICLE_SHADOW_EFFECT(iLocal_525[2], 0, 255);
      if (!ENTITY::DOES_ENTITY_EXIST(iLocal_533))
      {
        iLocal_533 = OBJECT::CREATE_OBJECT(func_117(18), ENTITY::GET_ENTITY_COORDS(iLocal_525[2], true), true, true, false);
        ENTITY::SET_ENTITY_COORDS(iLocal_533, ENTITY::GET_ENTITY_COORDS(iLocal_525[2], true), true, false, false, true);
        ENTITY::SET_ENTITY_ROTATION(iLocal_533, ENTITY::GET_ENTITY_ROTATION(iLocal_525[2], 2), 2, true);
        ENTITY::FREEZE_ENTITY_POSITION(iLocal_533, true);
        ENTITY::SET_ENTITY_COLLISION(iLocal_533, false, false);
      }
    }
    else
    {
      VEHICLE::_REMOVE_VEHICLE_SHADOW_EFFECT(iLocal_525[2]);
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_533))
      {
        OBJECT::DELETE_OBJECT(&iLocal_533);
      }
    }
  }
}
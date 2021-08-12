// family1.ysc @ L25454
void func_382(int iParam0)
{
  float fVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
    {
      GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
      VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_3027, 0f);
      fLocal_101 = ENTITY::GET_ENTITY_SPEED(iParam0);
      fLocal_5977 = ENTITY::GET_ENTITY_SPEED(iLocal_3027);
      if (fLocal_5977 > fLocal_101)
      {
        if ((fLocal_5977 + 1f) > fLocal_101)
        {
          fVar0 = 0.05f;
        }
      }
      else
      {
        fVar0 = -0.06f;
      }
      fLocal_5974 = (fLocal_3256 * 30f);
      fLocal_3254 = (fLocal_3254 + (fVar0 * SYSTEM::TIMESTEP()));
    }
  }
}
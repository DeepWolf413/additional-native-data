// nigel2.ysc @ L41297
void func_395()
{
  if (!iLocal_3229)
  {
    if (fLocal_3266 > 124136f)
    {
      if (func_22(Local_3483))
      {
        if (ENTITY::GET_ENTITY_HEALTH(Local_3483) < 200)
        {
          ENTITY::SET_ENTITY_HEALTH(Local_3483, 200, 0);
        }
      }
      if (func_15(Local_3497))
      {
        ENTITY::SET_ENTITY_HEALTH(Local_3497, 1000, 0);
        if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_3497, 4))
        {
          VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_3497, 4, true);
        }
        VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3497, true);
        VEHICLE::SMASH_VEHICLE_WINDOW(Local_3497, 0);
        VEHICLE::SMASH_VEHICLE_WINDOW(Local_3497, 1);
        VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(Local_3497);
        VEHICLE::SET_VEHICLE_DAMAGE(Local_3497, 0f, 1f, 0.1f, 800f, 1850f, true);
        VEHICLE::SET_VEHICLE_DAMAGE(Local_3497, -0.2f, 1f, 0.5f, 50f, 650f, true);
        VEHICLE::SET_VEHICLE_DAMAGE(Local_3497, -0.7f, -0.2f, 0.3f, 50f, 500f, true);
        iLocal_3229 = 1;
      }
    }
  }
}
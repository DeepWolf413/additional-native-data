// fm_mission_controller.ysc @ L653805
void func_10791(int iParam0, bool bParam1, bool bParam2)
{
  if ((!func_1030(bParam1) && MISC::IS_BIT_SET(Local_19406.f_1, 14)) && OBJECT::IS_OBJECT_A_PICKUP(iParam0))
  {
    OBJECT::SET_TEAM_PICKUP_OBJECT(iParam0, bParam2, false);
    if (Local_19406.f_1578[bParam1] == bLocal_3288)
    {
      if (bParam2 == Local_31280[bLocal_3287 /*292*/].f_1)
      {
        if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0))
        {
          OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(iParam0);
          if ((!func_4158(bParam1) || MISC::IS_BIT_SET(Global_4718592.f_5742[bParam1 /*346*/].f_120, 18)) || Global_1312809)
          {
            ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
            ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
            OBJECT::_HIDE_PICKUP(iParam0, true);
          }
        }
      }
    }
  }
}
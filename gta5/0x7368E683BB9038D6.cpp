// am_mp_property_int.ysc @ L248310
void func_2596()
{
  int iVar0;
  struct<3> Var1;
  int iVar4;
  int iVar5;
  
  if (((func_3991(iLocal_523) && !MISC::IS_BIT_SET(Local_8865[PLAYER::PLAYER_ID() /*37*/].f_7, 17)) && Local_10542.f_503[8] != 0) && !MISC::IS_BIT_SET(iLocal_2526, 17))
  {
    MISC::SET_BIT(&iLocal_2526, 17);
  }
  if ((func_3991(iLocal_523) && !MISC::IS_BIT_SET(Local_8865[PLAYER::PLAYER_ID() /*37*/].f_7, 17)) && !MISC::IS_BIT_SET(iLocal_2526, 17))
  {
    STREAMING::REQUEST_ANIM_DICT("anim@safehouse@wine");
    if (STREAMING::HAS_ANIM_DICT_LOADED("anim@safehouse@wine"))
    {
      NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
      iLocal_3892 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_3932160.f_146.f_82[7 /*102*/].f_7, 10f, joaat("prop_wine_bot_01"), true, false, true);
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_3892))
      {
        iVar0 = NETWORK::OBJ_TO_NET(iLocal_3892);
        Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@safehouse@wine", "drink_wine_stage1_bottle", Global_3932160.f_146.f_82[7 /*102*/].f_7, Global_3932160.f_146.f_82[7 /*102*/].f_10, 0f, 2) };
        iVar4 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(iVar0);
        ENTITY::SET_ENTITY_ROTATION(iVar4, Var1, 2, true);
        iVar5 = iVar4;
        ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar5);
        NETWORK::NETWORK_UNREGISTER_NETWORKED_ENTITY(iVar4);
        MISC::SET_BIT(&iLocal_2526, 17);
      }
    }
  }
}
// am_mp_arena_box.ysc @ L110256
void func_1268()
{
  if (((((((func_1265() && !MISC::IS_BIT_SET(Global_1702510, 3)) && !MISC::IS_BIT_SET(Global_1702510, 2)) && !MISC::IS_BIT_SET(Global_1702510, 4)) && !func_906(PLAYER::PLAYER_ID())) && !func_1271(PLAYER::PLAYER_ID())) && !(func_1269(PLAYER::PLAYER_ID()) == 1 && func_1264())) && !(Global_2520122 && !CAM::IS_GAMEPLAY_CAM_RENDERING()))
  {
    if (!MISC::IS_BIT_SET(Local_311.f_38, 9))
    {
      ENTITY::CREATE_MODEL_HIDE(2799.999f, -3915.813f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), false);
      ENTITY::REMOVE_MODEL_HIDE(2800.957f, -3930.407f, 180.493f, 50f, MISC::GET_HASH_KEY("xs_x18intvip_vip_light_dummy"), false);
      MISC::SET_BIT(&(Local_311.f_38), 9);
    }
  }
  else if (MISC::IS_BIT_SET(Local_311.f_38, 9))
  {
    ENTITY::CREATE_MODEL_HIDE(2800.957f, -3930.407f, 180.493f, 50f, MISC::GET_HASH_KEY("xs_x18intvip_vip_light_dummy"), false);
    ENTITY::REMOVE_MODEL_HIDE(2799.999f, -3915.813f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), false);
    MISC::CLEAR_BIT(&(Local_311.f_38), 9);
  }
}
// beat_posse_breakout.ysc @ L1131
void func_25()
{
  if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_1041[5]))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[5]))
    {
      ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1041[5], 1);
    }
  }
}
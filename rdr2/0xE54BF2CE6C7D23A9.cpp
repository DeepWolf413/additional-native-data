// gang2.ysc @ L54971
void func_1354()
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;

  if (PHYSICS::DOES_ROPE_EXIST(Local_524.f_136))
  {
    vVar0 = { PHYSICS::GET_ROPE_VERTEX_COORD(Local_524.f_136, 1) };
    vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_378[1], vVar0) };
    if (vVar3.x > vLocal_989.x)
    {
      vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_378[1], vLocal_989.x, vVar3.y, (vVar3.z - 0.3f)) };
      PHYSICS::_0xE54BF2CE6C7D23A9(Local_524.f_136, 1, vVar6);
    }
  }
}
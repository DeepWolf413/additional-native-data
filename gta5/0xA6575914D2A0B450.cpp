// fm_capture_creator.ysc @ L292217
void func_3355(int iParam0)
{
  struct<4> Var0;
  int iVar5;
  
  if ((!func_33() || !ENTITY::DOES_ENTITY_EXIST(iParam0)) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
  {
    return;
  }
  Var0 = { func_3356(195) };
  iVar5 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
  iVar5 = INTERIOR::GET_INTERIOR_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
  if (INTERIOR::IS_VALID_INTERIOR(iVar5) && INTERIOR::IS_INTERIOR_READY(iVar5))
  {
    if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) != iVar5)
    {
      INTERIOR::_0x82EBB79E258FA2B7(iParam0, iVar5);
      INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0, iVar5, INTERIOR::GET_ROOM_KEY_FOR_GAME_VIEWPORT());
    }
  }
}
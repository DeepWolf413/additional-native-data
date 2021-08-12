// fbi2.ysc @ L140552
void func_976(bool bParam0, bool bParam1)
{
  int iVar0;
  struct<3> Var1;
  
  if (bParam1)
  {
    iVar0 = 0;
    while (iVar0 < Local_817.f_91)
    {
      PHYSICS::UNPIN_ROPE_VERTEX(Local_817.f_5, iVar0);
      iVar0++;
    }
  }
  Var1 = { PHYSICS::GET_ROPE_LAST_VERTEX_COORD(Local_817.f_5) };
  iLocal_233 = OBJECT::CREATE_OBJECT(func_18(22), Var1, true, true, false);
  ENTITY::SET_ENTITY_VISIBLE(iLocal_233, false, false);
  ENTITY::SET_ENTITY_COLLISION(iLocal_233, false, false);
  func_996(bParam0);
  func_977(bParam0);
}
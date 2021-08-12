// shop_horse_shop.ysc @ L12966
void func_403(var uParam0)
{
  if (func_797(uParam0, 32))
  {
    func_801(uParam0);
  }
  if (!func_53(uParam0->f_2, 268435456))
  {
    NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
  }
  func_788(Local_14.f_1);
  func_789(Local_14.f_2);
  if (ENTITY::IS_ENTITY_A_PED(Local_14.f_5))
  {
    PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_14.f_5), false);
    func_789(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_14.f_5));
  }
}
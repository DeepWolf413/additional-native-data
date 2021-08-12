// fishing_core.ysc @ L11252
void func_444(int iParam0)
{
  if (!func_1() || !ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
  {
    NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(iParam0);
  }
}
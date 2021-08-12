// am_mp_auto_shop.ysc @ L67683
int func_483(var uParam0, var uParam1)
{
  if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam1)[uParam0->f_444]))
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID((*uParam1)[uParam0->f_444]);
    return 0;
  }
  else if (!func_216(&(uParam0->f_438)))
  {
    func_215(&(uParam0->f_438), 0, 0);
    func_484(uParam0->f_445);
    NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID((*uParam1)[uParam0->f_444]), true, true);
  }
  else if (func_210(&(uParam0->f_438), 1500, 0))
  {
    func_74(&(uParam0->f_438));
    func_209(uParam1[uParam0->f_444]);
    uParam0->f_444 = 0;
    return 1;
  }
  return 0;
}
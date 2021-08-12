// freemode.ysc @ L845922
void func_12867(var uParam0)
{
  bool bVar0;
  int iVar1;
  
  bVar0 = false;
  if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_31) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_31))
  {
    iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_31);
    if ((iVar1 == joaat("volatol") || iVar1 == joaat("bombushka")) || iVar1 == joaat("akula"))
    {
      bVar0 = true;
      func_12869(uParam0->f_31, iVar1, 0);
      func_12869(uParam0->f_31, iVar1, 1);
      func_12869(uParam0->f_31, iVar1, 2);
      if (!func_167(&(uParam0->f_36), 0))
      {
        func_12793(&(uParam0->f_36), 0);
        uParam0->f_37 = uParam0->f_31;
        VEHICLE::_0x78CEEE41F49F421F(uParam0->f_31, 0);
      }
    }
  }
  if (!bVar0 && func_167(&(uParam0->f_36), 0))
  {
    if (((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_37) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_37, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_37)) && !func_12868(uParam0->f_37, 0)) && !func_12868(uParam0->f_37, 1)) && !func_12868(uParam0->f_37, 2))
    {
      VEHICLE::_0x78CEEE41F49F421F(uParam0->f_37, 1);
    }
    func_12794(&(uParam0->f_36), 0);
    uParam0->f_37 = -1;
  }
}
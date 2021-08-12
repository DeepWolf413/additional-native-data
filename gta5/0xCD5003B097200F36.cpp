// re_muggings.ysc @ L2381
void func_40()
{
  if (!OBJECT::DOES_PICKUP_EXIST(iLocal_191))
  {
    if (PED::IS_PED_INJURED(iLocal_63))
    {
      Local_184 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_63, 1.2f, 1.5f) };
    }
    else
    {
      Local_184 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), 1.2f, 1.5f) };
    }
    iLocal_191 = OBJECT::CREATE_PICKUP(joaat("pickup_money_wallet"), Local_184, iLocal_144, iLocal_192, true, iLocal_85);
    iLocal_67 = func_156(iLocal_191);
    func_37(&uLocal_380, 0, 0);
    bLocal_60 = true;
  }
}
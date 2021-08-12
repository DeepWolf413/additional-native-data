// business_battles.ysc @ L210406
void func_3161(int iParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (func_1251(uLocal_2409[iParam0]))
  {
    ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]), true, true);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]), true, false);
    ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]), true, false);
    func_3163(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]));
    Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]), true) };
    Var3 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1.2f, 1.5f) };
    if (Var3.x == Var0.x && Var3.f_1 == Var0.f_1)
    {
      iVar6 = func_699(iParam0);
      if (iVar6 != -1)
      {
        iVar7 = uLocal_2409.f_624[iVar6 /*7*/];
        if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar7))
        {
          Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar7), false) };
        }
      }
    }
    fVar8 = func_3162(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0])));
    Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
    ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]), Var3, true, false, false, true);
  }
}
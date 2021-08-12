// loanshark_hunter.ysc @ L27893
void func_894()
{
  if (!func_83(8) && func_83(1073741824 /* Float: 2f */))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
    {
      if (!PED::IS_PED_RAGDOLL(iLocal_143))
      {
        GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), true);
        func_80(8);
      }
    }
  }
}
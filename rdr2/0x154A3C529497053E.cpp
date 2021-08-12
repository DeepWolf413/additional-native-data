// beat_gold_panner.ysc @ L9727
void func_302()
{
  if (!bLocal_403)
  {
    if (ENTITY::IS_ENTITY_DEAD(iLocal_211[0]) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_211[0], -1))
    {
      if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_512[2 /*12*/].f_8, iLocal_211[0]))
      {
        func_205(Local_512[2 /*12*/].f_8, 1, 1);
        bLocal_403 = true;
      }
    }
  }
}
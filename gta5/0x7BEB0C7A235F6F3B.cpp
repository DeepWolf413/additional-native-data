// gb_delivery.ysc @ L150564
void func_1609(var uParam0)
{
  struct<3> Var0;
  float fVar3;
  
  func_1606(uParam0);
  if (func_1619(uParam0))
  {
    Var0 = { func_1615(uParam0, 0) };
    fVar3 = func_1611(uParam0);
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_11.f_553[0 /*12*/], Var0, false, false, true);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_11.f_553[0 /*12*/], fVar3);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_11.f_581[0], fVar3);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_9, fVar3);
    VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_11.f_553[0 /*12*/], true, true, false);
    VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_11.f_553[0 /*12*/]);
    VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam0->f_11.f_553[0 /*12*/], 0f);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_9, false, false);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_11.f_553[0 /*12*/], false, false);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_11.f_581[0], false, false);
    ENTITY::SET_ENTITY_COLLISION(uParam0->f_9, false, false);
    TASK::TASK_PLAY_ANIM(uParam0->f_11.f_588[0], "anim@amb@waving@male", "air_wave", 8f, -8f, -1, 9, 0f, false, false, false);
    VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(uParam0->f_11.f_553[0 /*12*/], 0);
    VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(uParam0->f_11.f_553[0 /*12*/], 3f, 3f, true);
    func_1610(1, &(uParam0->f_11.f_553[0 /*12*/]), &(uParam0->f_11.f_553[1 /*12*/]));
    ENTITY::SET_ENTITY_VISIBLE(uParam0->f_11.f_553[1 /*12*/], false, false);
  }
}
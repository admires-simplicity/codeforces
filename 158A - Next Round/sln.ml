let solve n k =
    let arr = Array.make n 0 in
    let () = for i = 0 to (n - 1) do
        Scanf.scanf " %d" (fun x -> Array.set arr i x)
    done in
    let a_k = Array.get arr (k-1) in
    Array.fold_left (fun acc -> fun elt -> acc + if elt > 0 && elt >= a_k then 1 else 0) 0 arr
;;

Printf.printf "%d\n" (Scanf.scanf "%d %d" solve);;
